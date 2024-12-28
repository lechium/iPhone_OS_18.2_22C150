//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNode, NSDate, NSDictionary, NSString;

@protocol IKJSDOMEvent <JSExport>
@property(readonly, nonatomic) _Bool defaultPrevented;
@property(readonly, nonatomic) NSDate *timeStamp;
@property(readonly, nonatomic) _Bool cancelable;
@property(readonly, nonatomic) _Bool bubbles;
@property(readonly, nonatomic) long long eventPhase;
@property(readonly, retain, nonatomic) IKDOMNode *currentTarget;
@property(readonly, retain, nonatomic) IKDOMNode *target;
@property(readonly, retain, nonatomic) NSString *type;
- (void)stopImmediatePropagation;
- (void)preventDefault;
- (void)stopPropagation;
- (id)initWithType:(NSString *)arg1 eventInit:(NSDictionary *)arg2;
@end
