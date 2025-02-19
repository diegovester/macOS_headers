//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSDictionary, NSImage, NSMutableArray, NSString, iTermCharacterSourceDescriptor, iTermData, iTermImageWrapper, iTermMetalCursorInfo, iTermMetalIMEInfo;

@protocol iTermMetalDriverDataSourcePerFrameState <NSObject>
@property(readonly, nonatomic) BOOL asciiAntiAliased;
@property(readonly, nonatomic) BOOL thinStrokesForTimestamps;
@property(readonly, nonatomic) struct NSEdgeInsets extraMargins;
@property(readonly, nonatomic) double blend;
@property(readonly, nonatomic) double transparencyAlpha;
@property(readonly, nonatomic) BOOL hasBackgroundImage;
@property(readonly, nonatomic) struct NSEdgeInsets edgeInsets;
@property(readonly, nonatomic) long long firstVisibleAbsoluteLineNumber;
@property(readonly, nonatomic) NSColor *timestampsTextColor;
@property(readonly, nonatomic) NSColor *timestampsBackgroundColor;
@property(readonly, nonatomic) BOOL timestampsEnabled;
// Error parsing type for property fullScreenFlashColor:
// Property attributes: T,R,N

@property(readonly, nonatomic) BOOL cursorGuideEnabled;
@property(readonly, nonatomic) NSColor *cursorGuideColor;
@property(readonly, nonatomic) BOOL showBroadcastStripes;
@property(readonly, nonatomic) iTermMetalIMEInfo *imeInfo;
@property(readonly, nonatomic) struct CGRect badgeDestinationRect;
@property(readonly, nonatomic) struct CGRect badgeSourceRect;
@property(readonly, nonatomic) NSImage *badgeImage;
// Error parsing type for property processedDefaultBackgroundColor:
// Property attributes: T,R,N

// Error parsing type for property defaultBackgroundColor:
// Property attributes: T,R,N

@property(readonly, nonatomic) struct CGSize cellSizeWithoutSpacing;
@property(readonly, nonatomic) struct CGSize cellSize;
@property(readonly, nonatomic) CDStruct_1ef3fb1f gridSize;
- (struct CGRect)containerRect;
- (struct CGRect)relativeFrame;
- (iTermData *)lineForRow:(int)arg1;
- (void)setDebugString:(NSString *)arg1;
- (void)metalEnumerateHighlightedRows:(void (^)(double, int))arg1;
- (void)enumerateIndicatorsInFrame:(struct CGRect)arg1 block:(void (^)(iTermIndicatorDescriptor *))arg2;
- (void)metalGetUnderlineDescriptorsForASCII:(out CDStruct_b2fbf00d *)arg1 nonASCII:(out CDStruct_b2fbf00d *)arg2 strikethrough:(out CDStruct_b2fbf00d *)arg3;
- (id)metalASCIICreationIdentifierWithOffset:(struct CGSize)arg1;
- (iTermImageWrapper *)metalBackgroundImageGetMode:(unsigned long long *)arg1;
- (NSDictionary *)metalImagesForGlyphKey:(CDStruct_8e3f450a *)arg1 asciiOffset:(struct CGSize)arg2 size:(struct CGSize)arg3 scale:(double)arg4 emoji:(char *)arg5;
- (iTermMetalCursorInfo *)metalDriverCursorInfo;
- (iTermCharacterSourceDescriptor *)characterSourceDescriptorForASCIIWithGlyphSize:(struct CGSize)arg1 asciiOffset:(struct CGSize)arg2;
- (void)metalGetGlyphKeys:(CDStruct_8e3f450a *)arg1 attributes:(CDStruct_f4bab6ad *)arg2 imageRuns:(NSMutableArray *)arg3 background:(struct iTermMetalBackgroundColorRLE *)arg4 rleCount:(int *)arg5 markStyle:(out int *)arg6 row:(int)arg7 width:(int)arg8 drawableGlyphs:(int *)arg9 date:(out id *)arg10;
@end

