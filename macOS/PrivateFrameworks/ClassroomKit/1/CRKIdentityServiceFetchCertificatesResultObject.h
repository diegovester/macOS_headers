//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKIdentityServiceFetchCertificatesResultObject : CATTaskResultObject
{
    NSDictionary *_certificatesByPersonLinkID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *certificatesByPersonLinkID; // @synthesize certificatesByPersonLinkID=_certificatesByPersonLinkID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

