//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MAStoreDownloadCache : NSObject
{
}

+ (id)resumeDataPathForFilePath:(id)arg1;
+ (id)maResumeDataPathForFilePath:(id)arg1;
+ (id)appCacheDirectory;
+ (id)appCacheRelocatedDirectory;
+ (id)fallbackCacheDirectoryCreateIfMissing:(BOOL)arg1;
+ (id)_defaultDirectoryAttributes;
+ (id)_defaultFileAttributes;
+ (id)defaultCache;
- (void)removeDownloadCacheURL:(id)arg1;
- (void)setResumeData:(id)arg1 forURL:(id)arg2 receivedLength:(long long)arg3 expectedLength:(long long)arg4;
- (id)resumeDataForURL:(id)arg1;
- (BOOL)isFinishedForURL:(id)arg1;
- (BOOL)validateCacheForURL:(id)arg1 removeCorruptPkg:(BOOL)arg2 error:(id *)arg3;
- (void)setFinishedForURL:(id)arg1;
- (void)resetWriteCompletedForURL:(id)arg1;
- (BOOL)writeCompletedForURL:(id)arg1;
- (long long)expectedDownloadFileSizeForURL:(id)arg1;
- (long long)receivedDownloadFileSizeForURL:(id)arg1;
- (long long)partialDownloadFileSizeForURL:(id)arg1;
- (id)partialDownloadPathForURL:(id)arg1;
- (void)writeDictionary:(id)arg1 toPath:(id)arg2;
- (id)dictionaryForFilePath:(id)arg1;

@end

