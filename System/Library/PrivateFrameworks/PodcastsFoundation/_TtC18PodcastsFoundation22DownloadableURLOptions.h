//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL;

@interface _TtC18PodcastsFoundation22DownloadableURLOptions : NSObject
{
    MISSING_TYPE *urlRawString;	// 8 = 0x8
    MISSING_TYPE *nonAppInitiated;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003811d0
- (id)init;	// IMP=0x0000000000381170
- (id)init:(id)arg1 nonAppInitiated:(_Bool)arg2;	// IMP=0x00000000003810b0
- (id)initWithUrl:(id)arg1 nonAppInitiated:(_Bool)arg2;	// IMP=0x0000000000380f40
@property(nonatomic) _Bool nonAppInitiated; // @synthesize nonAppInitiated;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) NSString *urlRawString;

@end
