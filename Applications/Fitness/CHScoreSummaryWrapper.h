//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CHScoreSummaryWrapper : NSObject
{
    MISSING_TYPE *scoreSummary;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000001a3aa0
- (id)init;	// IMP=0x00100000001a3a40
@property(nonatomic, readonly) NSString *description;
- (id)initWithElapsedSeconds:(long long)arg1 personalScore:(float)arg2 communityLowerScore:(float)arg3 communityLowerMiddleScore:(float)arg4 communityUpperMiddleScore:(float)arg5 communityUpperScore:(float)arg6;	// IMP=0x00100000001a3910

@end

