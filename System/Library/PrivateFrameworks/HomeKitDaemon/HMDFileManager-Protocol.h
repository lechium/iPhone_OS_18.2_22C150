//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSFileHandle, NSString, NSURL;

@protocol HMDFileManager <NSObject>
@property(readonly, copy) NSURL *legacyHeroFrameStoreDirectoryURL;
@property(readonly, copy) NSURL *heroFrameStoreDirectoryURL;
- (_Bool)createFileAtPath:(NSString *)arg1 contents:(NSData *)arg2 attributes:(NSDictionary *)arg3;
- (NSDictionary *)attributesOfItemAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)moveItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
- (NSArray *)contentsOfDirectoryAtURL:(NSURL *)arg1 includingPropertiesForKeys:(NSArray *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (void)enumerateItemsAtURL:(NSURL *)arg1 includingPropertiesForKeys:(NSArray *)arg2 usingBlock:(void (^)(NSURL *))arg3;
- (_Bool)isDeletableFileAtPath:(NSString *)arg1;
- (NSFileHandle *)fileHandleForReadingFromURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)linkItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)writeJSONObject:(id)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
- (id)JSONObjectWithURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)zipItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)unzipItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)removeItemAtURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)writeDictionary:(NSDictionary *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)writeData:(NSData *)arg1 toURL:(NSURL *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (NSData *)dataWithContentsOfURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)fileExistsAtURL:(NSURL *)arg1;
- (_Bool)fileExistsAtPath:(NSString *)arg1 isDirectory:(_Bool *)arg2;
- (_Bool)fileExistsAtPath:(NSString *)arg1;
- (_Bool)copyItemAtURL:(NSURL *)arg1 toURL:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)createDirectoryAtURL:(NSURL *)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(NSDictionary *)arg3 error:(id *)arg4;
@end
