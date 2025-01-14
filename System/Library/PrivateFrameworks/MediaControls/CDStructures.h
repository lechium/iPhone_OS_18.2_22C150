//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAFrameRateRange {
    float _field1;
    float _field2;
    float _field3;
};

struct CCUIModuleLayoutSize {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    NSString *identifier;
    double frontLayerAlpha;
    double backLayerAlpha;
    double frontLayerBlurRadius;
    double frontLayerBlurAnimationDelay;
    double backLayerBlurRadius;
    double backLayerBlurAnimationDelay;
    double yRotation;
} CDStruct_aa6b5db3;

typedef struct {
    double snapshotTime;
    double startTime;
    double endTime;
    double duration;
    double elapsedDuration;
    float rate;
    float defaultRate;
    _Bool isLiveContent;
    _Bool isLoading;
    _Bool isInTransition;
} CDStruct_8b36af64;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
} CDStruct_d83abbfb;

