//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/NSObject-Protocol.h>

@class PKScribbleInteraction;
@protocol NSObject><NSCopying;

@protocol PKScribbleInteractionElementSource <NSObject>
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 focusElement:(id <NSObject><NSCopying>)arg2 initialFocusSelectionReferencePoint:(struct CGPoint)arg3 completion:(void (^)(id <UITextInput>))arg4;
- (struct CGRect)_scribbleInteraction:(PKScribbleInteraction *)arg1 frameForElement:(id <NSObject><NSCopying>)arg2;
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 requestElementsInRect:(struct CGRect)arg2 completion:(void (^)(NSArray *, long long))arg3;

@optional
- (void)_scribbleInteraction:(PKScribbleInteraction *)arg1 focusElement:(id <NSObject><NSCopying>)arg2 completion:(void (^)(id <UITextInput>))arg3;
@end

