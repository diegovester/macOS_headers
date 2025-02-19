//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class CNPostalAddress, NSString, PLRevGeoCompoundNameInfo, PLRevGeoMapItem;

@interface PLRevGeoLocationInfo : NSObject <NSSecureCoding>
{
    BOOL _isHome;
    PLRevGeoMapItem *_mapItem;
    CNPostalAddress *_postalAddress;
    NSString *_addressString;
    NSString *_countryCode;
    PLRevGeoCompoundNameInfo *_compoundNameInfo;
    PLRevGeoCompoundNameInfo *_compoundSecondaryNameInfo;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isInvalidWithPlistData:(id)arg1;
+ (BOOL)isInvalidWithCoder:(id)arg1;
+ (id)infoFromPlistData:(id)arg1;
+ (id)_namingOrderForAssetDetailedReverseGeoDescription;
+ (id)_namingOrderForAssetReverseGeoDescription;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
+ (id)countryCodeWithGEOMapItem:(id)arg1;
@property(nonatomic) BOOL isHome; // @synthesize isHome=_isHome;
@property(readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo; // @synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo;
@property(readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundNameInfo; // @synthesize compoundNameInfo=_compoundNameInfo;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(readonly, nonatomic) PLRevGeoMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)plistData;
- (BOOL)isEqual:(id)arg1;
- (id)placeWithAnnotation:(id)arg1;
- (BOOL)hasLocation;
- (id)placeNamesForLocalizedDetailedDescription;
- (id)localizedDescription;
- (BOOL)hasMapItem;
- (id)description;
- (id)initWithMapItem:(id)arg1 postalAddress:(id)arg2 addressString:(id)arg3 countryCode:(id)arg4 compoundNameInfo:(id)arg5 compoundSecondaryNameInfo:(id)arg6 isHome:(BOOL)arg7;
- (id)initWithGEOMapItem:(id)arg1;

@end

