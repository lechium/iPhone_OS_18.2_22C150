//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)
+ (void)tsu_raiseWithError:(id)arg1;	// IMP=0x008000000001e69c
+ (void)errnoRaise:(id)arg1 format:(id)arg2;	// IMP=0x008000000004e695
- (id)tsu_error;	// IMP=0x001000000001e7a9
- (int)localErrno;	// IMP=0x001000000004e80f
@end

