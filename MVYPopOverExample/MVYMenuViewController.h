//
//  MVYMenuViewController.h
//  MVYPopOverExample
//
//  Created by Álvaro Murillo del Puerto on 09/10/13.
//  Copyright (c) 2013 Mobivery. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MVYMenuViewController : UIViewController

@property (nonatomic, copy) void (^onDismissButtonPresed)(void);

@end
