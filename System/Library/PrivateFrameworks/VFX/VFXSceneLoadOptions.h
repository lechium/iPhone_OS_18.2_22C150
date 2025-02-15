//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL;
@protocol MTLCommandQueue, MTLDevice;

@interface VFXSceneLoadOptions : NSObject
{
    MISSING_TYPE *isAuthoringWorld;	// 8 = 0x8
    MISSING_TYPE *isVFX2;	// 9 = 0x9
    MISSING_TYPE *enableRuntimeScriptCompilation;	// 10 = 0xa
    MISSING_TYPE *allowLoadingFromFuture;	// 11 = 0xb
    MISSING_TYPE *setupAsTemplate;	// 12 = 0xc
    MISSING_TYPE *automaticallyPrepareScene;	// 13 = 0xd
    MISSING_TYPE *setupAsyncRuntime;	// 14 = 0xe
    MISSING_TYPE *world;	// 16 = 0x10
    MISSING_TYPE *asyncRuntimeLock;	// 24 = 0x18
    MISSING_TYPE *loadBindingsMetadata;	// 32 = 0x20
    MISSING_TYPE *enableParallelDecoding;	// 33 = 0x21
    MISSING_TYPE *setupRenderer;	// 34 = 0x22
    MISSING_TYPE *colorPixelFormat;	// 40 = 0x28
    MISSING_TYPE *depthPixelFormat;	// 48 = 0x30
    MISSING_TYPE *enableDeferredRendering;	// 56 = 0x38
    MISSING_TYPE *internalPixelFormatDepth;	// 57 = 0x39
    MISSING_TYPE *useGammaBlending;	// 58 = 0x3a
    MISSING_TYPE *doNotClearRenderOutput;	// 59 = 0x3b
    MISSING_TYPE *device;	// 64 = 0x40
    MISSING_TYPE *commandQueue;	// 72 = 0x48
    MISSING_TYPE *clientID;	// 80 = 0x50
    MISSING_TYPE *metalLibraryURL;	// 15548664 = 0xed40f8
    MISSING_TYPE *systemRegistrationOptions;	// 0 = 0x0
    MISSING_TYPE *counterStorage;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *peerPid;	// 0 = 0x0
    MISSING_TYPE *peerTaskIdentity;	// 0 = 0x0
    MISSING_TYPE *loadPrecompiledScripts;	// 1701273965 = 0x6567616d
}

- (void).cxx_destruct;	// IMP=0x000000000054fa20
- (id)init;	// IMP=0x000000000054f9d0
@property(nonatomic) unsigned int peerTaskIdentity; // @synthesize peerTaskIdentity;
@property(nonatomic) int peerPid; // @synthesize peerPid;
@property(nonatomic) CDStruct_97a62ed9 counterStorage; // @synthesize counterStorage;
@property(nonatomic, copy) NSURL *metalLibraryURL;
@property(nonatomic, copy) NSString *clientID;
@property(nonatomic, retain) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue;
@property(nonatomic, retain) id <MTLDevice> device; // @synthesize device;
@property(nonatomic) _Bool doNotClearRenderOutput; // @synthesize doNotClearRenderOutput;
@property(nonatomic) _Bool useGammaBlending; // @synthesize useGammaBlending;
@property(nonatomic) BOOL internalPixelFormatDepth; // @synthesize internalPixelFormatDepth;
@property(nonatomic) _Bool enableDeferredRendering;
@property(nonatomic) unsigned long long depthPixelFormat; // @synthesize depthPixelFormat;
@property(nonatomic) unsigned long long colorPixelFormat; // @synthesize colorPixelFormat;
@property(nonatomic) _Bool setupRenderer; // @synthesize setupRenderer;
@property(nonatomic) _Bool enableParallelDecoding; // @synthesize enableParallelDecoding;
@property(nonatomic) _Bool loadBindingsMetadata; // @synthesize loadBindingsMetadata;
@property(nonatomic) struct _opaque_pthread_mutex_t *asyncRuntimeLock; // @synthesize asyncRuntimeLock;
@property(nonatomic) __weak struct __CFXWorld *world; // @synthesize world;
@property(nonatomic) _Bool setupAsyncRuntime; // @synthesize setupAsyncRuntime;
@property(nonatomic) _Bool automaticallyPrepareScene; // @synthesize automaticallyPrepareScene;
@property(nonatomic) _Bool setupAsTemplate; // @synthesize setupAsTemplate;
@property(nonatomic) _Bool allowLoadingFromFuture; // @synthesize allowLoadingFromFuture;
@property(nonatomic) _Bool enableRuntimeScriptCompilation; // @synthesize enableRuntimeScriptCompilation;
@property(nonatomic) _Bool isVFX2; // @synthesize isVFX2;
@property(nonatomic) _Bool isAuthoringWorld; // @synthesize isAuthoringWorld;
- (void)registerVFX2AuthoringSystems:(_Bool)arg1;	// IMP=0x0000000000555340

@end

