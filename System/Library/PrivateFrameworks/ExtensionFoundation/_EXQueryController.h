//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;
@protocol _EXQueryControllerDelegate;

@interface _EXQueryController : NSObject
{
    MISSING_TYPE *innerController;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
}

+ (void)executeQueries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000005b110
+ (id)executeQueries:(id)arg1;	// IMP=0x006000000005b0b0
+ (void)executeQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000005afa0
+ (id)executeQuery:(id)arg1;	// IMP=0x006000000005aee0
- (void).cxx_destruct;	// IMP=0x000000000005b940
- (id)init;	// IMP=0x000000000005b8c0
@property(nonatomic, readonly) NSArray *extensions;
@property(nonatomic, readonly) NSString *description;
- (void)suspend;	// IMP=0x000000000005b660
- (void)resume;	// IMP=0x000000000005b630
- (id)initWithQueries:(id)arg1;	// IMP=0x000000000005b600
- (id)initWithQueries:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000005b320
@property(nonatomic, readonly) NSArray *queries;
@property(nonatomic, readonly) NSArray *extensionIdentities;
@property(nonatomic) __weak id <_EXQueryControllerDelegate> delegate; // @synthesize delegate;

@end

