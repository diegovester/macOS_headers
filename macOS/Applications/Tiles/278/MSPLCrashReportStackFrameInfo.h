//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPLCrashReportSymbolInfo;

@interface MSPLCrashReportStackFrameInfo : NSObject
{
    unsigned long long _instructionPointer;
    MSPLCrashReportSymbolInfo *_symbolInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MSPLCrashReportSymbolInfo *symbolInfo; // @synthesize symbolInfo=_symbolInfo;
@property(readonly, nonatomic) unsigned long long instructionPointer; // @synthesize instructionPointer=_instructionPointer;
- (id)initWithInstructionPointer:(unsigned long long)arg1 symbolInfo:(id)arg2;

@end

