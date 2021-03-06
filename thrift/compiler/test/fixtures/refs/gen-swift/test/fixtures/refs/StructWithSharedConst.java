/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftStruct("StructWithSharedConst")
public final class StructWithSharedConst {
    @ThriftConstructor
    public StructWithSharedConst(
        @ThriftField(value=1, name="opt_shared_const", requiredness=Requiredness.OPTIONAL) final test.fixtures.refs.MyField optSharedConst,
        @ThriftField(value=2, name="shared_const", requiredness=Requiredness.NONE) final test.fixtures.refs.MyField sharedConst,
        @ThriftField(value=3, name="req_shared_const", requiredness=Requiredness.REQUIRED) final test.fixtures.refs.MyField reqSharedConst
    ) {
        this.optSharedConst = optSharedConst;
        this.sharedConst = sharedConst;
        this.reqSharedConst = reqSharedConst;
    }
    
    protected StructWithSharedConst() {
      this.optSharedConst = null;
      this.sharedConst = null;
      this.reqSharedConst = null;
    }
    
    public static class Builder {
        private test.fixtures.refs.MyField optSharedConst;
    
        public Builder setOptSharedConst(test.fixtures.refs.MyField optSharedConst) {
            this.optSharedConst = optSharedConst;
            return this;
        }
        private test.fixtures.refs.MyField sharedConst;
    
        public Builder setSharedConst(test.fixtures.refs.MyField sharedConst) {
            this.sharedConst = sharedConst;
            return this;
        }
        private test.fixtures.refs.MyField reqSharedConst;
    
        public Builder setReqSharedConst(test.fixtures.refs.MyField reqSharedConst) {
            this.reqSharedConst = reqSharedConst;
            return this;
        }
    
        public Builder() { }
        public Builder(StructWithSharedConst other) {
            this.optSharedConst = other.optSharedConst;
            this.sharedConst = other.sharedConst;
            this.reqSharedConst = other.reqSharedConst;
        }
    
        public StructWithSharedConst build() {
            return new StructWithSharedConst (
                this.optSharedConst,
                this.sharedConst,
                this.reqSharedConst
            );
        }
    }
    
    private final test.fixtures.refs.MyField optSharedConst;
    private final test.fixtures.refs.MyField sharedConst;
    private final test.fixtures.refs.MyField reqSharedConst;

    
    @ThriftField(value=1, name="opt_shared_const", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.refs.MyField getOptSharedConst() { return optSharedConst; }
        
    @ThriftField(value=2, name="shared_const", requiredness=Requiredness.NONE)
    public test.fixtures.refs.MyField getSharedConst() { return sharedConst; }
        
    @ThriftField(value=3, name="req_shared_const", requiredness=Requiredness.REQUIRED)
    public test.fixtures.refs.MyField getReqSharedConst() { return reqSharedConst; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("optSharedConst", optSharedConst)
            .add("sharedConst", sharedConst)
            .add("reqSharedConst", reqSharedConst)
            .toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        StructWithSharedConst other = (StructWithSharedConst)o;
    
        return
            Objects.equals(optSharedConst, other.optSharedConst) &&
            Objects.equals(sharedConst, other.sharedConst) &&
            Objects.equals(reqSharedConst, other.reqSharedConst) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            optSharedConst,
            sharedConst,
            reqSharedConst
        });
    }
    
}
