//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <ConstantClasses/NSFastEnumeration-Protocol.h>

@interface _NSConstantDictionary : NSDictionary <NSFastEnumeration>
{
}

+ (id)alloc;
+ (void)load;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (unsigned long long)count;
- (unsigned long long)capacity;
- (id)allValues;
- (id)allKeys;
- (id)objectEnumerator;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;

@end

