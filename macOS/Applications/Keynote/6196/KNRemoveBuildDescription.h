//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import "GSSPAutoEncodable-Protocol.h"

@class KNAbstractSlide, KNBuild, NSArray, NSUUID;

@interface KNRemoveBuildDescription : TSPObject <GSSPAutoEncodable>
{
    NSUUID *_slideId;
    NSUUID *_buildId;
    BOOL _shouldRemoveChunks;
    BOOL _shouldRemoveChunkIdentifiers;
    NSArray *_tuplesToUpdate;
}

@property(readonly, nonatomic) NSArray *tuplesToUpdate; // @synthesize tuplesToUpdate=_tuplesToUpdate;
@property(readonly, nonatomic) BOOL shouldRemoveChunkIdentifiers; // @synthesize shouldRemoveChunkIdentifiers=_shouldRemoveChunkIdentifiers;
@property(readonly, nonatomic) BOOL shouldRemoveChunks; // @synthesize shouldRemoveChunks=_shouldRemoveChunks;
- (void).cxx_destruct;
- (void)didInitFromSOS;
@property(readonly, nonatomic) KNBuild *build;
@property(readonly, nonatomic) KNAbstractSlide *slide;
- (id)initWithSlide:(id)arg1 build:(id)arg2 shouldRemoveChunks:(BOOL)arg3 tuplesToUpdate:(id)arg4 shouldRemoveChunkIdentifiers:(BOOL)arg5;
- (void)populateGSSPRemoveBuildDescription:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{RemoveBuildDescriptionArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{UUID}^{UUID}BB}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{RemoveBuildDescriptionArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{UUID}^{UUID}BB}16@24, name: loadFromArchive:unarchiver:

@end

