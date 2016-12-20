//
//  Person.m
//  Book
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import "Person.h"

@implementation Person

-(instancetype) initWithName:(NSString*)name
                    birthday:(NSDate*)birthday {
    self = [super init];
    
    if(self) {
        _name = name;
        _birthday = birthday;
    }
    return self;
}

@end
