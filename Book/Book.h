//
//  Book.h
//  Book
//
//  Created by Jason Crawford on 12/20/16.
//  Copyright © 2016 Jason Crawford. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"

@interface Book : NSObject

@property (nonatomic) NSString *title;
@property (nonatomic) Person *author;
@property (nonatomic) int yearOfPublication;

-(instancetype)initWithTitle:(NSString*)title
                      author:(Person*)author
                        year:(int)year;

@end
