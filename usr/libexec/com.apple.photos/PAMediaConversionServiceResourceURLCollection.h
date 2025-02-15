//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableDictionary, NSURL, PAMediaConversionServiceResourceURLCollectionAccessProvider;

@interface PAMediaConversionServiceResourceURLCollection : NSObject
{
    NSMutableDictionary *_urlReferencesByRole;	// 8 = 0x8
    PAMediaConversionServiceResourceURLCollectionAccessProvider *_accessProviderDelegate;	// 16 = 0x10
}

+ (id)filenameSummaryStringForDictionaryRepresentation:(id)arg1;	// IMP=0x0040000000008b43
+ (_Bool)getSignatureString:(id *)arg1 filenameSummary:(id *)arg2 forDictionaryRepresentation:(id)arg3;	// IMP=0x0010000000008747
+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 accessProvider:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000084f7
+ (id)collectionWithMainResourceURL:(id)arg1;	// IMP=0x00100000000084a7
- (void).cxx_destruct;	// IMP=0x00100000000075a1
@property(retain) PAMediaConversionServiceResourceURLCollectionAccessProvider *accessProviderDelegate; // @synthesize accessProviderDelegate=_accessProviderDelegate;
@property(retain) NSMutableDictionary *urlReferencesByRole; // @synthesize urlReferencesByRole=_urlReferencesByRole;
- (_Bool)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000073d3
- (id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000006e91
@property(readonly) unsigned long long urlCount;
- (void)enumerateResourceURLs:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006ded
- (void)enumerateResourceURLReferences:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006bf8
- (id)fileSizeSummary;	// IMP=0x0010000000006ad7
- (id)description;	// IMP=0x0010000000006ac0
- (id)logMessageSummary;	// IMP=0x0010000000006aac
- (id)logMessageSummaryWithFullPath:(_Bool)arg1;	// IMP=0x0010000000006988
@property(readonly) _Bool allURLsAreReadable;
- (_Bool)removeExistingEmptyFilesWithError:(id *)arg1;	// IMP=0x00100000000066fd
- (_Bool)ensureFilesExistWithError:(id *)arg1;	// IMP=0x001000000000656c
- (id)filenameExtensionAndPathHashForRole:(id)arg1;	// IMP=0x001000000000647d
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)arg1;	// IMP=0x00100000000062dd
- (id)typeIdentifierForResourceURLWithRole:(id)arg1;	// IMP=0x0010000000005e46
- (_Bool)containsAnyRole:(id)arg1;	// IMP=0x0010000000005c41
- (_Bool)containsAllRoles:(id)arg1;	// IMP=0x0010000000005a38
- (void)setShouldDeleteURLOnDeallocation:(_Bool)arg1 forRole:(id)arg2;	// IMP=0x0010000000005955
- (id)resourceURLForRole:(id)arg1;	// IMP=0x00100000000057e2
- (void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(_Bool)arg3;	// IMP=0x001000000000577c
- (void)setResourceURL:(id)arg1 forRole:(id)arg2;	// IMP=0x001000000000556b
- (unsigned long long)hash;	// IMP=0x00100000000054cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000005477
- (id)init;	// IMP=0x0010000000005411
@property(readonly) NSError *blastDoorError;
@property(readonly) NSURL *blastDoorSourceURL;
@property(readonly) NSDictionary *blastDoorVideoComplementProperties;
@property(readonly) NSDictionary *blastDoorMainSourceProperties;
@property(readonly) _Bool isBlastDoorAccessRequired;

@end

