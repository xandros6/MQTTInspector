//
//  MQTTInspectorDetailViewController.h
//  MQTTInspector
//
//  Created by Christoph Krey on 09.11.13.
//  Copyright (c) 2013 Christoph Krey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Session+Create.h"
#import <MQTTClient/MQTTClient.h>

@interface MQTTInspectorDetailViewController : UIViewController <UISplitViewControllerDelegate, MQTTSessionDelegate>

@property (strong, nonatomic) Session *session;
@property (strong, nonatomic) MQTTSession *mqttSession;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (void)alert:(NSString *)message;
- (void)publish:(Publication *)pub;

@end
