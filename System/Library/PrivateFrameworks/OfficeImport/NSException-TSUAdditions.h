//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)
+ (void)tsu_raiseWithError:(id)arg1;	// IMP=0x0080000000269134
+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;	// IMP=0x0080000000298676
- (id)tsu_error;	// IMP=0x001000000026929c
- (int)sfu_localErrno;	// IMP=0x00100000002987f0
@end

