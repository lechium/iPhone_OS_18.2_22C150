//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <C2/NSObject-Protocol.h>

@class C2Session, C2SessionTask, NSError;

@protocol C2SessionTaskDelegate <NSObject>
- (void)C2Session:(C2Session *)arg1 task:(C2SessionTask *)arg2 didCompleteWithError:(NSError *)arg3;
@end
