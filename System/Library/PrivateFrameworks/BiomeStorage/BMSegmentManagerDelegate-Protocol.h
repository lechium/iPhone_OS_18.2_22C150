//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStorage/NSObject-Protocol.h>

@class BMFrameStore, BMSegmentManager, NSString;

@protocol BMSegmentManagerDelegate <NSObject>
- (void)segmentManager:(BMSegmentManager *)arg1 willDeleteSegmentName:(NSString *)arg2 frameStore:(BMFrameStore *)arg3;
@end
