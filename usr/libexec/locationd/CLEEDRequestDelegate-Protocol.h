//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLEEDMitigation;

@protocol CLEEDRequestDelegate
- (void)notifyHelperInvalidation;
- (void)notifyNewRequestAvailable;

@optional
- (void)notifyMitigationNeeded:(CLEEDMitigation *)arg1;
@end
