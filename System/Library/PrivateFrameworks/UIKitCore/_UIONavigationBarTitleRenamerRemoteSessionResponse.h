//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSActionResponse.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIONavigationBarTitleRenamerRemoteSessionResponse : BSActionResponse
{
}

+ (id)successResponseForAction:(int)arg1;	// IMP=0x006000000189e6ce
+ (id)shouldEndEditingResponse:(_Bool)arg1;	// IMP=0x006000000189e646
+ (id)willBeginRenamingResponseWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x006000000189e558
@property(readonly, nonatomic) _Bool shouldEndEditing;
@property(readonly, nonatomic) struct _NSRange selectedRange;
@property(readonly, nonatomic) NSString *text;
- (int)_action;	// IMP=0x000000000189e76f

@end

