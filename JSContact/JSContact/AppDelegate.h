//
//  AppDelegate.h
//  JSContact
//
//  Created by Symbio on 2019/5/27.
//  Copyright © 2019 cuichengcheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

