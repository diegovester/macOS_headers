//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKValueTemplateTag.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKConditionTemplateTag : SKValueTemplateTag
{
    long long matchType;
    NSMutableArray *subtemplates;
    NSArray *matchStrings;
}

@property(readonly, nonatomic) NSArray *matchStrings; // @synthesize matchStrings;
@property(readonly, nonatomic) long long matchType; // @synthesize matchType;
- (id)objectInSubtemplatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfSubtemplates;
- (long long)type;
- (void)dealloc;
- (id)initWithKeyPath:(id)arg1 matchType:(long long)arg2 matchStrings:(id)arg3 subtemplates:(id)arg4;

@end

