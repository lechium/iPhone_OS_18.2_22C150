//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (InternetDateTime)
+ (id)dateFromRFC3339String:(id)arg1;	// IMP=0x0080000000175b1e
+ (id)dateFromRFC822String:(id)arg1;	// IMP=0x008000000017583a
+ (id)dateFromInternetDateTimeString:(id)arg1 formatHint:(int)arg2;	// IMP=0x008000000017578a
+ (id)internetDateTimeFormatter;	// IMP=0x008000000017567d
+ (id)dateWithEDAMTimestamp:(long long)arg1;	// IMP=0x0080000000250389
- (long long)edamTimestamp;	// IMP=0x0010000000250364
@end

