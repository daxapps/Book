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

@property (nonatomic, copy) NSString * _Nonnull title;
@property (nonatomic) Person * _Nonnull author;
@property (nonatomic) Person * _Nullable editor;
@property (nonatomic) int yearOfPublication;

-(instancetype _Nonnull)initWithTitle:(NSString* _Nonnull)title
                      author:(Person* _Nonnull)author
                        year:(int)year;

@end
