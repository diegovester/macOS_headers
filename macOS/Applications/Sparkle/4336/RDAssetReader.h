//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData;

@interface RDAssetReader : NSObject <NSCopying>
{
    NSData *_fileData;
    unsigned long long _assetsOffset;
    unsigned long long _assetsSize;
}

+ (id)assetReaderWithData:(id)arg1 offset:(unsigned long long)arg2 assetSize:(unsigned long long)arg3;
@property(nonatomic) unsigned long long assetsSize; // @synthesize assetsSize=_assetsSize;
@property(nonatomic) unsigned long long assetsOffset; // @synthesize assetsOffset=_assetsOffset;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (char *)assetAtOffset:(unsigned long long)arg1 size:(unsigned long long)arg2;

@end

