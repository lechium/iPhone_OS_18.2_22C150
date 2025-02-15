//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCVocalAttenuationModel, NSError, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCVocalAttenuationModelProviderImplementation : NSObject
{
    NSObject<OS_dispatch_queue> *_creationQueue;	// 8 = 0x8
    MPCVocalAttenuationModel *_model;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    NSError *_loadingError;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002fae40
@property(copy, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) MPCVocalAttenuationModel *model; // @synthesize model=_model;
- (_Bool)isValidEspressoFile:(id)arg1;	// IMP=0x00000000002fad52
- (_Bool)isValidPlistModelFile:(id)arg1;	// IMP=0x00000000002fac5c
- (_Bool)isValidModelFile:(id)arg1;	// IMP=0x00000000002fabfc
- (id)modelFileExtensions;	// IMP=0x00000000002fabef
- (_Bool)moveModelFromURL:(id)arg1 toURL:(id)arg2;	// IMP=0x00000000002fa6fd
- (void)purgeSideLoadedModelDirectoriesAtURL:(id)arg1;	// IMP=0x00000000002fa297
- (void)purgeModelAtURL:(id)arg1;	// IMP=0x00000000002f9e6b
- (_Bool)validateModelAtURL:(id)arg1;	// IMP=0x00000000002f9701
- (id)directoriesAtURL:(id)arg1;	// IMP=0x00000000002f9617
- (id)latestModelDirectoryAtURL:(id)arg1;	// IMP=0x00000000002f954e
- (id)baseModelDirectoryURL;	// IMP=0x00000000002f93c4
- (id)baseDirectoryURL;	// IMP=0x00000000002f923a
- (id)remoteModelDirectoryURL;	// IMP=0x00000000002f91f3
- (id)bundleModelDirectoryURL;	// IMP=0x00000000002f9188
- (id)_setupPaths;	// IMP=0x00000000002f7ce4
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f7ba8
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly, copy, nonatomic) NSString *basePath;
@property(readonly, copy, nonatomic) NSString *plistPath;
- (id)init;	// IMP=0x00000000002f7b0b

@end

