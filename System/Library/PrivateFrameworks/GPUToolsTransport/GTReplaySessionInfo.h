//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface GTReplaySessionInfo : NSObject
{
    NSURL *_gputraceURL;	// 8 = 0x8
    unsigned long long _shaderDebuggerVersion;	// 16 = 0x10
    unsigned long long _shaderProfilerVersion;	// 24 = 0x18
    unsigned long long _accelerationViewerVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000402d
- (void).cxx_destruct;	// IMP=0x000000000000421f
@property(nonatomic) unsigned long long accelerationViewerVersion; // @synthesize accelerationViewerVersion=_accelerationViewerVersion;
@property(nonatomic) unsigned long long shaderProfilerVersion; // @synthesize shaderProfilerVersion=_shaderProfilerVersion;
@property(nonatomic) unsigned long long shaderDebuggerVersion; // @synthesize shaderDebuggerVersion=_shaderDebuggerVersion;
@property(retain, nonatomic) NSURL *gputraceURL; // @synthesize gputraceURL=_gputraceURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000412c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004035

@end

