//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HMB)
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;	// IMP=0x001000000008ee55
+ (id)hmbDecodeQueryableParameter:(id)arg1;	// IMP=0x001000000008ee03
+ (id)hmbEncodeQueryableParameter:(id)arg1;	// IMP=0x001000000008ede9
+ (id)hmbStringWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x00100000000974c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

