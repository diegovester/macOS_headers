//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermCommandRunner.h"

@class NSData, NSMutableData, NSNumber;

@interface iTermBufferedCommandRunner : iTermCommandRunner
{
    NSMutableData *_output;
    BOOL _truncated;
    NSNumber *_maximumOutputSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL truncated; // @synthesize truncated=_truncated;
@property(retain, nonatomic) NSNumber *maximumOutputSize; // @synthesize maximumOutputSize=_maximumOutputSize;
@property(readonly, nonatomic) NSData *output; // @synthesize output=_output;
- (void)saveData:(id)arg1;
- (void)didReadData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

