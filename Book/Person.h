//
//  Person.h
//  Book
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject

@property (nonatomic) NSString *name;
@property (nonatomic) NSDate *birthday;

//-(instancetype) initWithName:(NSString*)name
//                    birthday:(NSDate*)birthday;

@end
