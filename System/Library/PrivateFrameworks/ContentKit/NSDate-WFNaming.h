//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (WFNaming)
+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x0010000000060992
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)wfSerializedRepresentation;	// IMP=0x0010000000060923
- (id)wf_formattedStringWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includeTimeForISO8601:(_Bool)arg5 timeZone:(id)arg6 locale:(id)arg7;	// IMP=0x001000000006957b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
