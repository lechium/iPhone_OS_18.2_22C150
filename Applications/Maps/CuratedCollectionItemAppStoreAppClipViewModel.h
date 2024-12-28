//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAppStoreAppClip, NSString;

@interface CuratedCollectionItemAppStoreAppClipViewModel : NSObject
{
    NSString *_subtitle;	// 8 = 0x8
    GEOAppStoreAppClip *_appClip;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000094d265
@property(readonly, nonatomic) GEOAppStoreAppClip *appClip; // @synthesize appClip=_appClip;
- (void)fetchAppClipIconWithSize:(struct CGSize)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000094cf8b
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000094cdaf
@property(readonly) unsigned long long hash;
- (id)initWithAppStoreAppClip:(id)arg1;	// IMP=0x001000000094cd2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
