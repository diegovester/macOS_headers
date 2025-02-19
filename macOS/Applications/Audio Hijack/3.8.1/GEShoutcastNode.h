//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AHShoutcast2Node.h"

@class NSString;

@interface GEShoutcastNode : AHShoutcast2Node
{
    BOOL _usingDefaultEncoder;
    int _selectedTab;
    BOOL _shouldScrollTitles;
    BOOL _hideAdvancedFormat;
    NSString *_nickname;
    NSString *_errorMessageForDisplay;
    NSString *_errorIcon;
    NSString *_streamIDLabelText;
    NSString *_logoLabelText;
}

@property(nonatomic) BOOL hideAdvancedFormat; // @synthesize hideAdvancedFormat=_hideAdvancedFormat;
@property(retain, nonatomic) NSString *logoLabelText; // @synthesize logoLabelText=_logoLabelText;
@property(retain, nonatomic) NSString *streamIDLabelText; // @synthesize streamIDLabelText=_streamIDLabelText;
@property(retain, nonatomic) NSString *errorIcon; // @synthesize errorIcon=_errorIcon;
@property(nonatomic) BOOL shouldScrollTitles; // @synthesize shouldScrollTitles=_shouldScrollTitles;
@property(retain, nonatomic) NSString *errorMessageForDisplay; // @synthesize errorMessageForDisplay=_errorMessageForDisplay;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
- (void)setSetupShown:(BOOL)arg1;
- (void)setMetadataShown:(BOOL)arg1;
- (void)setStatusShown:(BOOL)arg1;
- (void)setSelectedTab:(int)arg1;
- (BOOL)setupShown;
- (BOOL)metadataShown;
- (BOOL)statusShown;
- (void)setRetryButtonValue:(id)arg1;
- (id)retryButtonValue;
- (void)stopWithError:(id)arg1;
- (void)stopWithIrrecoverableErrorCode:(int)arg1 string:(id)arg2;
- (void)stopWithErrorString:(id)arg1;
- (void)setHasError:(BOOL)arg1;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)genericBadSetupError;
- (BOOL)validateStreamSetup:(id *)arg1;
- (id)displayState;
- (id)streamSize;
- (double)streamTime;
- (void)setPresetFormatID:(id)arg1;
- (id)presetFormatID;
- (id)sampleRateMenuItems;
- (id)bitsPerSampleMenuItems;
- (id)bitrateModeMenuItems;
- (id)channelsMenuItems;
- (id)bitrateMenuItems;
- (void)setEncodingType:(id)arg1;
- (id)encodingType;
- (id)encodingTypeMenuItems;
- (void)_setFormatSmart:(id)arg1;
- (void)_setFormatReplacingValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)_keyFromFormatKey:(id)arg1;
- (id)_formatKeyFromKey:(id)arg1;
- (void)setVersion:(int)arg1;
- (BOOL)usesStationLogo;
- (BOOL)usesStreamIDField;
- (void)raUpdateFromPlist:(id)arg1;
- (id)raSaveToPlist;
- (void)dealloc;
- (id)init;

@end

