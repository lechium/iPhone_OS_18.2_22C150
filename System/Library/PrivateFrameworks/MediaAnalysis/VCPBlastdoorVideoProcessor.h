//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSURL;

__attribute__((visibility("hidden")))
@interface VCPBlastdoorVideoProcessor : NSObject
{
    NSURL *_url;	// 8 = 0x8
    NSMutableArray *_frameProcessors;	// 16 = 0x10
    NSDictionary *_decoderSettings;	// 24 = 0x18
    CDUnknownBlockType _progressHandler;	// 32 = 0x20
    struct atomic<bool> _canceled;	// 40 = 0x28
    struct atomic<bool> _stopProcessing;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x0000000000276b52
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) NSDictionary *decoderSettings; // @synthesize decoderSettings=_decoderSettings;
- (void)cancel;	// IMP=0x0000000000276b13
- (_Bool)analyzeWithError:(id *)arg1;	// IMP=0x00000000002769de
- (_Bool)addFrameProcessingRequest:(CDUnknownBlockType)arg1 withConfiguration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000027693f
- (_Bool)processConfiguration:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002766de
- (id)initWithURL:(id)arg1;	// IMP=0x000000000027661b

@end

