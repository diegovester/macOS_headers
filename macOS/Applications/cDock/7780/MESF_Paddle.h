//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PaddleDelegate.h"

@class NSString;

@interface MESF_Paddle : NSObject <PaddleDelegate>
{
}

+ (void)validadePlugin:(id)arg1 withButton:(id)arg2;
+ (void)purchasePlugin:(id)arg1 withButton:(id)arg2 andProgress:(id)arg3;
+ (id)productWithPlugin:(id)arg1;
+ (id)sharedInstance;
- (id)willShowPaddleUIType:(long long)arg1 product:(id)arg2;
- (void)didDismissPaddleUIType:(long long)arg1 triggeredUIType:(long long)arg2 product:(id)arg3;
- (id)customStoragePath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

