//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MKLookAroundEntryPoint, MKLookAroundView;

@protocol LookAroundPresentation <NSObject>
- (void)exitLookAround;
- (void)enterLookAroundWithEntryPoint:(MKLookAroundEntryPoint *)arg1 lookAroundView:(MKLookAroundView *)arg2 showsFullScreen:(_Bool)arg3 originFrame:(struct CGRect)arg4;
@end
