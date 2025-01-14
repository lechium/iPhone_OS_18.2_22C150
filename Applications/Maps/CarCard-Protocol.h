//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol CarCardContent;

@protocol CarCard <NSObject>
@property(copy, nonatomic) CDUnknownBlockType selectionHandler;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;
@property(retain, nonatomic) UIView *accessoryView;
@property(nonatomic) unsigned long long accessory;
@property(nonatomic) long long titleNumberOfLines;
@property(retain, nonatomic) NSString *title;
@property(nonatomic) _Bool staysOnTop;
@property(nonatomic) CDStruct_035a826d layout;
@property(retain, nonatomic) UIViewController<CarCardContent> *content;
@end

