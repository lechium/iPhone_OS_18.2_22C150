//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLBackgroundTask.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface QuickTypePFLBackgroundTask : MLBackgroundTask
{
    NSURL *_url;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000f7d5
+ (Class)taskRunnerClass;	// IMP=0x006000000000f7c4
- (void).cxx_destruct;	// IMP=0x000000000000f948
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f878
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f7dd
- (id)initWithURL:(id)arg1;	// IMP=0x000000000000f75c

@end
