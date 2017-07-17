//
//  AppDelegate.h
//  TestFlipCoin
//
//  Created by Bhushan Mahajan on 24/04/17.
//  Copyright © 2017 Bhushan Mahajan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;

@end

