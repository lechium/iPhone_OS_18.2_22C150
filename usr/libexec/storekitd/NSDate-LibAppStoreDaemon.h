//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (LibAppStoreDaemon)
- (double)lib_timeElapsedUntilNow;	// IMP=0x00200000000504be
- (double)lib_secondsFromNow;	// IMP=0x00100000000504ac
- (id)lib_simpleWeekDate;	// IMP=0x00100000000503d1
- (id)lib_loggableShortDate;	// IMP=0x00100000000502f6
- (id)lib_loggableDate;	// IMP=0x001000000005028c
- (_Bool)lib_isBefore:(id)arg1;	// IMP=0x001000000005026e
- (_Bool)lib_dateHasPassed;	// IMP=0x0010000000050250
@property(readonly, copy) NSString *lib_rfc3339String;
@property(readonly) unsigned long long lib_dispatchTime;
@end
