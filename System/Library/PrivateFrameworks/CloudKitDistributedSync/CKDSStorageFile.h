//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CKDSStorageFile : NSObject
{
    _Bool _isOwned;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d3de4
@property(readonly, nonatomic) _Bool isOwned; // @synthesize isOwned=_isOwned;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)dealloc;	// IMP=0x00000000000d3bdf
- (id)initWithURL:(id)arg1 isOwned:(_Bool)arg2;	// IMP=0x00000000000d3afb

@end
