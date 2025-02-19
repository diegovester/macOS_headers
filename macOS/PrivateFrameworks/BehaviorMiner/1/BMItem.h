//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BehaviorMiner/NSCopying-Protocol.h>

@class BMItemType, NSString;

@interface BMItem : NSObject <NSCopying>
{
    BMItemType *_type;
    NSString *_normalizedValue;
}

+ (id)itemWithType:(id)arg1 UUIDValue:(id)arg2;
+ (id)itemWithType:(id)arg1 numberValue:(id)arg2;
+ (id)itemWithType:(id)arg1 stringValue:(id)arg2;
@property(copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(retain, nonatomic) BMItemType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)uniformIdentifier;
@property(readonly, copy, nonatomic) id value;
- (id)initWithType:(id)arg1 normalizedValue:(id)arg2;
- (id)initWithType:(id)arg1 value:(id)arg2;

@end

