/*
 * Problem: 3829. Design Ride Sharing System
 * Contest: Weekly Contest 487
 * Platform: LeetCode
 * Difficulty: Medium
 * Logic: Manage riders and drivers using queues to ensure First-Come-First-Serve (FCFS) matching.
 * - Use two queues: one for waiting riders and one for available drivers.
 * - Use a boolean array `isMatched` to handle rider cancellations via lazy deletion.
 * - `addRider` & `addDriver`: Push IDs to their respective queues.
 * - `cancelRider`: Mark the rider ID as "matched" (true) in `isMatched` to effectively invalidate them.
 * - `matchDriverWithRider`: 
 * 1. Clean the front of the rider queue by popping any riders marked as true in `isMatched` (canceled riders).
 * 2. If both queues have elements, pair the front driver with the front rider and return {driver, rider}.
 * 3. Otherwise, return {-1, -1}.
 * Time Complexity: 
 * - addRider, addDriver, cancelRider: O(1)
 * - matchDriverWithRider: Amortized O(1) (each rider is pushed and popped at most once).
 * Space Complexity: O(N + M) where N is riders and M is drivers.
 */

#include <iostream>
#include <queue>
using namespace std;

class RideSharingSystem {
private:
    queue<int> riders;
    queue<int> drivers;
    bool isMatched[1001] = {};
    
public:
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        riders.push(riderId);
        isMatched[riderId] = false;
    }
    
    void addDriver(int driverId) {
        drivers.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        while(!riders.empty() && isMatched[riders.front()]){
            riders.pop();
        }

        if(riders.empty() || drivers.empty()){
            return {-1, -1};
        }

        int driver = drivers.front();
        drivers.pop();

        int rider = riders.front();
        riders.pop();

        isMatched[rider] = true;

        return {driver, rider};
    }
    
    void cancelRider(int riderId) {
        isMatched[riderId] = true;
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */
