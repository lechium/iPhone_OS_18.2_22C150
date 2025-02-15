//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKAnnotation, AKAnnotationTheme, AKPageController, IMTheme;
@protocol AKAnnotationEditorDelegate;

@protocol AKAnnotationEditor <NSObject>
@property(nonatomic) _Bool editsOnLaunch;
@property(retain, nonatomic) AKAnnotationTheme *annotationTheme;
@property(retain, nonatomic) AKPageController *annotationPageController;
@property(retain, nonatomic) AKAnnotation *annotation;
@property(nonatomic) __weak id <AKAnnotationEditorDelegate> delegate;
- (void)hide;

@optional
@property(retain, nonatomic) IMTheme *theme;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"IMTheme",?,&,N

@end

