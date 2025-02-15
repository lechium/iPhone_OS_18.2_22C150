//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVRoute.h>

@class MRGroupSessionInfo;

__attribute__((visibility("hidden")))
@interface MRUActiveGroupSessionRoute : MPAVRoute
{
    MRGroupSessionInfo *_groupSessionInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006567b
@property(retain, nonatomic) MRGroupSessionInfo *groupSessionInfo; // @synthesize groupSessionInfo=_groupSessionInfo;
- (_Bool)isPhoneRoute;	// IMP=0x000000000006564e
- (_Bool)isPickable;	// IMP=0x0000000000065646
- (_Bool)isPicked;	// IMP=0x000000000006563e
- (_Bool)isB520Route;	// IMP=0x00000000000655ec
- (_Bool)isHomePodRoute;	// IMP=0x0000000000065595
- (long long)routeSubtype;	// IMP=0x000000000006552e
- (long long)routeType;	// IMP=0x0000000000065526
- (id)routeUID;	// IMP=0x0000000000065509
- (id)routeName;	// IMP=0x000000000006544e
- (id)initWithActiveSession:(id)arg1;	// IMP=0x00000000000653e0

@end

