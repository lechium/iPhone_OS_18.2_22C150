//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Maps28FindMyHandleMapServiceTicket : NSObject
{
    MISSING_TYPE *handle;	// 0 = 0x0
    MISSING_TYPE *coordinate;	// 0 = 0x0
    MISSING_TYPE *ticket;	// 0 = 0x0
    MISSING_TYPE *isCancelled;	// 18094732 = 0x1141a8c
}

- (void).cxx_destruct;	// IMP=0x00400000000bcc20
- (id)init;	// IMP=0x00100000000bcbc0
- (void)applyToCorrectedSearch:(id)arg1;	// IMP=0x00100000000bc470
- (void)cancel;	// IMP=0x00100000000bc440
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=isCancelled;
- (_Bool)isCancelled;	// IMP=0x00100000000ba4e0

@end

