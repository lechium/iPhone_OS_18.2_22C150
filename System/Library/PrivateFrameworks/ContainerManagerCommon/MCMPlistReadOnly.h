//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDictionary, NSString, NSURL, Protocol;
@protocol MCMFileManagerReadsData><MCMFileManagerResolvesPaths;

__attribute__((visibility("hidden")))
@interface MCMPlistReadOnly : NSObject
{
    _Bool _keepArtifacts;	// 8 = 0x8
    NSCountedSet *_numIncludes;	// 16 = 0x10
    NSURL *_defaultPlistDirectoryURL;	// 24 = 0x18
    Protocol *_protocol;	// 32 = 0x20
    NSString *_pathOrName;	// 40 = 0x28
    NSDictionary *_rawPlist;	// 48 = 0x30
    NSDictionary *_preprocessedPlist;	// 56 = 0x38
    NSURL *_sourceFileURL;	// 64 = 0x40
    id <MCMFileManagerReadsData><MCMFileManagerResolvesPaths> _fileManager;	// 72 = 0x48
    CDUnknownBlockType _featureFlagProvider;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006ccb8
@property(nonatomic) _Bool keepArtifacts; // @synthesize keepArtifacts=_keepArtifacts;
@property(copy, nonatomic) CDUnknownBlockType featureFlagProvider; // @synthesize featureFlagProvider=_featureFlagProvider;
@property(retain, nonatomic) id <MCMFileManagerReadsData><MCMFileManagerResolvesPaths> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSURL *sourceFileURL; // @synthesize sourceFileURL=_sourceFileURL;
@property(readonly, nonatomic) NSDictionary *preprocessedPlist; // @synthesize preprocessedPlist=_preprocessedPlist;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(readonly, nonatomic) NSString *pathOrName; // @synthesize pathOrName=_pathOrName;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) NSURL *defaultPlistDirectoryURL; // @synthesize defaultPlistDirectoryURL=_defaultPlistDirectoryURL;
@property(retain, nonatomic) NSCountedSet *numIncludes; // @synthesize numIncludes=_numIncludes;
- (_Bool)_isNonatomicReadonlyBoolPropertyTypeWithAttributes:(const char *)arg1;	// IMP=0x000000000006c930
- (void)_forEachBoolPropertyUsingObjCMagicInProtocol:(id)arg1 runBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000006c80c
- (id)_urlByResolvingConfigName:(id)arg1 defaultPlistDirectoryURL:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006c5ec
- (id)_plistByResolvingIncludeInMutablePlist:(id)arg1 conformingToProtocol:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006be9a
- (id)_plistByResolvingFeatureFlagsInMutablePlist:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006bb70
- (id)_plistByPreprocessingPlist:(id)arg1 conformingToProtocol:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006ba15
- (void)_initBoolPropertyWithName:(id)arg1 entry:(id)arg2;	// IMP=0x000000000006b906
- (void)_initBoolPropertiesUsingObjCMagicWithPlist:(id)arg1 conformingToProtocol:(id)arg2;	// IMP=0x000000000006b847
- (_Bool)_initPropertiesWithPlist:(id)arg1 conformingToProtocol:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006b776
- (_Bool)override_initNonBoolPropertiesWithPlist:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006b74d
- (id)descriptionOfBoolPropertiesWithIndentString:(id)arg1;	// IMP=0x000000000006b5f8
- (_Bool)loadWithError:(id *)arg1;	// IMP=0x000000000006b25f
- (id)initWithRawPlist:(id)arg1 preprocessedPlist:(id)arg2 pathOrName:(id)arg3 protocol:(id)arg4 defaultPlistDirectoryURL:(id)arg5;	// IMP=0x000000000006af28
- (id)initWithPreprocessedPlist:(id)arg1 conformingToProtocol:(id)arg2;	// IMP=0x000000000006aed7
- (id)initFromPlist:(id)arg1 defaultPlistDirectoryURL:(id)arg2 conformingToProtocol:(id)arg3;	// IMP=0x000000000006ae8d
- (id)initFromPlistAtPathOrName:(id)arg1 defaultPlistDirectoryURL:(id)arg2 conformingToProtocol:(id)arg3;	// IMP=0x000000000006ae41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
